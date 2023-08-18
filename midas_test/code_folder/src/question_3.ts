function getQuestionPart(phrases: string[]): string[] {
  let result_strings_array: string[] = [];
  for (let i = 0; i < phrases.length; i++) {
    let common_substring: string = '';
    for (let j = 0; j < phrases[i].length; j++) {
      for (let k = 0; k < phrases[i].length - j; k++) {
        const sub_sub = phrases[i].substring(
          k, (k + (j + 1))
        );
        if (
          (phrases[(i + 1) % 3].indexOf(sub_sub) !== -1)
          && (phrases[(i + 2) % 3].indexOf(sub_sub)  !== -1)
        ) {
          common_substring = sub_sub;
        }
      }
    }
    const extracted: string = phrases[i].substring(0, (
      phrases[i].indexOf(common_substring)
    )) + phrases[i].substring((
      phrases[i].indexOf(common_substring) +
      common_substring.length
    ), phrases[i].length).trim()
    result_strings_array.push(extracted);
  }
  return result_strings_array;
}

export {getQuestionPart};