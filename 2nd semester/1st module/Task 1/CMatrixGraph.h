#pragma once

#include "Graph.h"

class MatrixGraph : public IGraph {
public:
	explicit MatrixGraph(int _verticesCount);
	explicit MatrixGraph(MatrixGraph *input);

	virtual void AddEdge(int from, int to) override;

	virtual int VerticesCount() const override { return verticesCount; }

	virtual void GetNextVertices(int vertex, std::vector<int>& vertices) const override;
	virtual void GetPrevVertices(int vertex, std::vector<int>& vertices) const override;

private:
	int verticesCount;
	// ������ ������ ���� �� "���������", ������ ������ �� "�����������"
	std::vector<std::vector<int>> edges;
};