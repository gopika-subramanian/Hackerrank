# o_Are they Long?

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

## Input Format

The first line contains an integer n.

Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

## Constraints

1 ≤ n ≤ 100

## Output Format

Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

## Sample Input 0

4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

## Sample Output 0

word
l10n
i18n
p43s
