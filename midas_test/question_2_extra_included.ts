// https://jsfiddle.net/boilerplate/typescript

function getRandomTime(): string {
  const hours = Math.floor(Math.random() * 24);
  const minutes = Math.floor(Math.random() * 60);

  const formattedHours = hours.toString().padStart(2, '0');
  const formattedMinutes = minutes.toString().padStart(2, '0');

  return `${formattedHours}:${formattedMinutes}`;
}

function getClockAngle(hh_mm: string): number {
  let splitted_hh_mm: string[] = hh_mm.split(':');
  let raw_answer_angle: number = 0;
  let hh: number = parseInt(splitted_hh_mm[0])
  let mm: number = parseInt(splitted_hh_mm[1])
  if (hh > 12) {
    hh -= 12;
  }
  raw_answer_angle = Math.abs((mm * 6) - ((hh * 30) + (mm * 0.5)));
  if (raw_answer_angle > 180) {
    raw_answer_angle -= 180;
  }
  return raw_answer_angle;
}

let input = getRandomTime();

document.querySelector("#app").innerHTML = (
  ''
  + 'input: '
  + input
  + '<br /> angle: '
  + getClockAngle(input)
);