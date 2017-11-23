#include "LineSegmenter.hpp"

int main() {
    LineSegmenter line_segmenter;
    string img_path = "../img/2min.png";

    line_segmenter.color_img = imread(img_path, CV_LOAD_IMAGE_COLOR);
    line_segmenter.org_img = imread(img_path, CV_LOAD_IMAGE_GRAYSCALE);

    line_segmenter.preprocess();

    line_segmenter.generate_chunks();

    line_segmenter.find_initial_lines();
    line_segmenter.get_lines_mats();

    return 0;

}