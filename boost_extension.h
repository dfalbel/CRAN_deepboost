/*
Written by:
Daniel Marcous, Yotam Sandbank
*/

#ifndef BOOST_EXTENSION_H_
#define BOOST_EXTENSION_H_

#include "types.h"

// Train a deepboost model on the given examples, using
// numIter iterations (which not necessarily means numIter trees) 
void Train(vector<Example>& examples, Model* model, float numIter);


// Classify examples using model
void Predict(const vector<Example>& examples, const Model& model, vector<Label>& labels);


// Compute the error of model on examples. Also compute the number of trees in
// model and their average size.
void EvaluateModel(const vector<Example>& examples, const Model& model,
                   float* error, float* avg_tree_size, int* num_trees);

#endif  // BOOST_EXTENSION_H_
