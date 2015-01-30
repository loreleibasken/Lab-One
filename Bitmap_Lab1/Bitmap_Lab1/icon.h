using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class icon {

private:

	Graphics^ graphics;
	PictureBox^ pictureBox;
	Bitmap^ bitmap = gcnew Bitmap("Graphics/dog.bmp");

	void refresh() {
		graphics->DrawImage(bitmap, 0, 0);
	}

public:

	icon(PictureBox^ pictureBox) {
		graphics = pictureBox->CreateGraphics();
		this->pictureBox = pictureBox;
	}

	void show() {
		refresh();
	}

	void hide() {
		pictureBox->Image = nullptr;
	}

	void up() {
		pictureBox->Top -= 10;
		refresh();
	}

	void down() {
		pictureBox->Top += 10;
		refresh();
	}

	void left() {
		pictureBox->Left -= 10;
		refresh();
	}

	void right() {
		pictureBox->Left += 10;
		refresh();
	}

};