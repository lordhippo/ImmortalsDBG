#include "FieldRenderer.h"
#include "colors.h"

void FieldRenderer::DrawBalls(const google::protobuf::RepeatedPtrField<SSL_DetectionBall>& data) const
{
	for (auto ball : data)
	{
		this->drawList->AddCircleFilled(ImVec2(ball.x(), ball.y()), ballRadius, IMC_ORANGE, 10);
		this->drawList->AddCircle(ImVec2(ball.x(), ball.y()), ballRadius, IMC_BLACK, 10);
	}
}