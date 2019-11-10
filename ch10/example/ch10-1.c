#include <stdio.h>
#include <math.h>
#include <string.h>
/**
 * 判断字符串是否是空字符串
 * @param cp
 * @return 1 空字符串， 0 非空字符串
 */
int isEmpty(char *cp);

/**
 *  返回指定位置的字符
 * @param index
 * @return 0 如果index不合法或超出范围
 */
char charAt(char *cp, int index);

/**
 * 返回指定字符在此字符串中第一次出现处的下标
 * @param target 从该字符串中查找
 * @param check 查找的字符串
 * @return -1 如果没有找到，如果找到返回第一个字符的位置
 */
int indexOf(char *target, char *check);

int indexOfFrom(int from, char *target, char *check);

char *replaceFrom(int index, char *target, char *old, char *new);

/**
 * 返回指定字符在此字符串中第一次出现处的下标，从末尾处开始反向查找
 * @param target 从该字符串中查找
 * @param check 查找的字符串
 * @return -1 如果没有找到
 */
int lastIndexOf(char *target, char *check);

/**
 * 判断两个字符串是否相等
 * @param str1
 * @param str2
 * @return 1 相等， 0 不相等（长度相等，内容相等）
 */
int equals(char *str1, char *str2);

/**
 * 将目标字符串中包含的字符串替换为另一个字符串
 * @param target
 * @param old 要被替换掉的字符串
 * @param new 替换后的字符串
 * @return
 */
char *replace(char *target, char *old, char *new);

/**
 * 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值
 * @param str1
 * @param str2
 * @return >0 的数str1大，<0 str1小，=0 两字符串相等
 */
int compare(char *str1, char *str2);

/**
 * 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值
 * 比较的时候忽略大小写，'a'和'A'认为是相等
 * @param str1
 * @param str2
 * @return >0 的数str1大，<0 str1小，=0 两字符串相等
 */
int compareIgnoreCase(char *str1, char *str2);

/**
 * 将double类型数字转换成字符串
 * @param target
 * @param d
 */
void doubleToStr(char *target, double d);

/**
 * 将传入字符串从指定位置切割，将分割后的字符串返回
 * @param cp
 * @param from 起始位置
 * @param end 结束位置
 * @return 返回起始位置到结束位置的字符串（将分割后的内容保存到cp中返回）
 */
char *subString(char *cp, int from, int end);

/**
 * 根据传入的字符串，将目标字符串分割，返回分割后的第一部分
 * 如果没有找到，直接返回原始字符串
 * @param target
 * @param split
 */
char *splitFirst(char *target, char *split);

int main(void) {
    char arr[100] = "";
    char *p = "";
    printf("%d\n", arr[0]);
    printf("%d\n", *p);

    printf("%d\n", isEmpty(arr));
    printf("%d\n", isEmpty(p));

    p = "abcdeab";
    char target[100] = "abcdeab";

    printf("charAt 2=%c\n", charAt(p, 2));

    char *check = "bc";
    printf("indexOf = %d\n", indexOf(p, check));
    printf("indexOf = %d\n", indexOf(p, "abcdeab"));
    printf("indexOf = %d\n", indexOf(p, "ab"));
    printf("lastindexOf = %d\n", lastIndexOf(p, "b"));
    printf("equals = %d\n", equals(p, "abcdeab"));
    printf("indexOfFrom = %d\n", indexOfFrom(0, p, "ab"));
    // printf("replace = %s\n", replace(target, "ab", ""));
    // printf("replace = %s\n", replaceFrom(0, target, "ab", ""));
    printf("replace = %s\n", replaceFrom(0, target, "abcd", "123"));
    printf("compare = %d\n", compare("abc", "abc"));
    printf("compare = %d\n", compare("abc", "ba"));
    doubleToStr(arr, 12345.987462);
    printf("doubleToStr = %s\n", arr);
    // printf("splitFirst = %s\n", splitFirst(arr, "."));
    printf("splitFirst = %s\n", splitFirst(arr, "5."));
    // printf("subString = %s\n", subString(arr, 2, 4));
}

int isEmpty(char *cp) {
    return cp == NULL || cp[0] == '\0';
}

char charAt(char *cp, int index) {
    int length = strlen(cp);

    if (index < 0 || index >= length) {
        printf("index 不合法\n");
        return 0;
    }

    return cp[index];
}

int indexOf(char *target, char *check) {
    int targetLength = strlen(target);
    int checkLength = strlen(check);
    int isFound = 1;

    for (int i = 0; i < targetLength - checkLength + 1; i++) {
        for (int j = 0; j < checkLength; j++) {
            if (target[i + j] == check[j]) {
                isFound = 1;
                continue;
            } else {
                isFound = 0;
                break;
            }
        }

        if (isFound) {
            return i;
        }
    }

    return -1;
}

int lastIndexOf(char *target, char *check) {
    int targetLength = strlen(target);
    int checkLength = strlen(check);
    int isFound = 1;

    for (int i = targetLength - checkLength; i >= 0; i--) {
        for (int j = 0; j < checkLength; j++) {
            if (target[i + j] == check[j]) {
                isFound = 1;
                continue;
            } else {
                isFound = 0;
                break;
            }
        }

        if (isFound) {
            return i;
        }
    }

    return -1;
}

int equals(char *str1, char *str2) {
    if (str1 == NULL && str2 == NULL) {
        return 1;
    } else if (str1 == NULL || str2 == NULL) {
        return 0;
    }

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    return indexOf(str1, str2) == 0;
}

int indexOfFrom(int from, char *target, char *check) {
    int targetLength = strlen(target);
    int checkLength = strlen(check);
    int isFound = 1;

    for (int i = from; i < targetLength - checkLength + 1; i++) {
        for (int j = 0; j < checkLength; j++) {
            if (target[i + j] == check[j]) {
                isFound = 1;
                continue;
            } else {
                isFound = 0;
                break;
            }
        }

        if (isFound) {
            return i;
        }
    }

    return -1;
}

int compare(char *str1, char *str2) {
    if (str1 == NULL || str2 == NULL) {
        printf("%s\n", "输入不合法");
        return 0;
    }

    int i = 0;

    while (str1[i] && str2[i]) {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];

}

int compareIgnoreCase(char *str1, char *str2) {
    if (str1 == NULL || str2 == NULL) {
        printf("%s\n", "输入不合法");
        return 0;
    }

    int i = 0;

    char char1, char2;

    while (str1[i] && str2[i]) {
        char1 = str1[i];
        char2 = str2[i];

        if (char1 >= 'A' && char1 <= 'Z') {
            char1 += 'a' - 'A';
        }

        if (char2 >= 'A' && char2 <= 'Z') {
            char2 += 'a' - 'A';
        }

        if (char1 != char2) {
            return char1 - char2;
        }

        i++;
    }

    return str1[i] - str2[i];
}


// char *replace(char *target, char *old, char *new) {
//     if (target == NULL || old == NULL || new == NULL) {
//         printf("%s\n", "输入不合法");
//         return target;
//     }

//     int targetLength = strlen(target);
//     int oldLength = strlen(old);
//     int newLength = strlen(new);

//     char temp[100];
//     int tempPoint = 0;

//     for (int i = 0; i < targetLength;) {
//         printf("i=%d\n", i);

//         if (indexOfFrom(i, target, old) == i) {
//             for (int j = 0; j < newLength; j++) {
//                 temp[tempPoint++] = new[j];
//             }

//             i += oldLength;
//         } else {
//             temp[tempPoint++] = target[i++];
//         }
//     }

//     printf("tempPoint=%d\n", tempPoint);
//     temp[tempPoint++] = '\0';

//     for (int i = 0; i < tempPoint; i++) {
//         target[i] = temp[i];
//         printf("%c\n", temp[i]);
//     }

//     return target;
// }

char *replaceFrom(int index, char *target, char *old, char *new) {
    if (target == NULL || old == NULL || new == NULL) {
        printf("%s\n", "输入不合法");
        return target;
    }

    int targetLength = strlen(target);
    int oldLength = strlen(old);
    int newLength = strlen(new);

    if (index >= targetLength) {
        return target;
    }

    printf("replaceFrom index =%d\n", index);

    if (indexOfFrom(index, target, old) == index) {
        if (oldLength > newLength) {
            for (int i = index + newLength; i < targetLength; ++i) {
                target[i] = target[i + oldLength - newLength];
            }

        } else if (oldLength < newLength) {
            for (int i = targetLength; i >= index + oldLength; --i) {
                target[i + newLength - oldLength] = target[i];
            }
        }


        for (int i = 0; i < newLength; i++) {
            target[index + i] = new[i];
        }

        if (newLength == 0) {
            index ++;
        } else {
            index += newLength;
        }

    } else {
        index++;
    }

    replaceFrom(index, target, old, new);

    return target;
}


void doubleToStr(char *target, double d) {
    int intPart = (int)d;

    double doublePart = d - intPart;

    int index = 0;

    while (intPart) {
        target[index++] = intPart % 10 + '0';
        intPart /= 10;
    }

    int temp, pointIndex;

    for (int i = 0; i < index / 2; i++) {
        temp = target[i];
        target[i] = target[index - i - 1];
        target[index - i - 1] = temp;
    }


    if (doublePart > 0.0000000001) {
        pointIndex = index;
        target[index++] = '.';
        printf("%lf\n", doublePart);
        long doubleToIntPart = (long)(doublePart * 1000000.0f);
        printf("doubleToIntPart=%ld\n", doubleToIntPart);

        while (doubleToIntPart) {
            target[index++] = doubleToIntPart % 10 + '0';
            doubleToIntPart /= 10;
        }

        for (int i = 0; i < (index - pointIndex - 2) / 2; i++) {
            printf("i=%d\n", i);
            printf("pointIndex=%d\n", index + pointIndex - i);
            temp = target[pointIndex + 1 + i];
            target[pointIndex + 1 + i] = target[index - i - 1];
            target[index - i - 1] = temp;
        }
    }

    target[index] = '\0';



}


char *subString(char *cp, int from, int end) {
    int length = strlen(cp);

    if (end <= from || end >= length) {
        printf("%s\n", "输入不合法");
        return cp;
    }

    int temp;

    if (from != 0) {
        for (int i = 0; i <= end - from; ++i) {
            cp[i] = cp[from + i];
        }
    }

    cp[end - from + 1] = '\0';
    return cp;
}

char *splitFirst(char *target, char *split) {

    int from = indexOf(target, split);

    if (from == -1) {
        return target;
    } else if (from == 0) {
        target[0] = '\0';
    } else {
        return subString(target, 0, from - 1);
    }



}













