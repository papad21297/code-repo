"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.getClockAngle = void 0;
function getClockAngle(hh_mm) {
    let splitted_hh_mm = hh_mm.split(':');
    let raw_answer_angle = 0;
    let hh = parseInt(splitted_hh_mm[0]);
    let mm = parseInt(splitted_hh_mm[1]);
    if (hh > 12) {
        hh -= 12;
    }
    raw_answer_angle = Math.abs((mm * 6) - ((hh * 30) + (mm * 0.5)));
    if (raw_answer_angle > 180) {
        raw_answer_angle -= 180;
    }
    return raw_answer_angle;
}
exports.getClockAngle = getClockAngle;
