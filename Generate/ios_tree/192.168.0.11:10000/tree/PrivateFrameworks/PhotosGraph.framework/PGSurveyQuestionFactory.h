/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory> {
    NSDictionary * _existingQuestionsByEntityIdentifier;
    bool  _ignoreExistingQuestions;
    PGManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *existingQuestionsByEntityIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreExistingQuestions;
@property (nonatomic, retain) PGManager *manager;
@property (nonatomic, readonly) long long questionOptions;
@property (nonatomic, readonly) unsigned short questionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetFromAssets:(id)arg1 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 radius:(double)arg3;
- (id)_questionsByEntityIdentifierFromQuestions:(id)arg1;
- (id)assetFromMomentNode:(id)arg1 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 radius:(double)arg3;
- (id)curatedAssetsFromMomentNode:(id)arg1;
- (id)existingQuestionsByEntityIdentifier;
- (id)existingQuestionsForEntityIdentifier:(id)arg1;
- (id)fetchExistingQuestions;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (bool)ignoreExistingQuestions;
- (id)initWithManager:(id)arg1;
- (id)keyAssetFromMomentNode:(id)arg1;
- (id)manager;
- (bool)questionAlreadyExists:(id)arg1;
- (long long)questionOptions;
- (unsigned short)questionType;
- (id)representativeCuratedAssetsFromMomentNode:(id)arg1;
- (void)setExistingQuestionsByEntityIdentifier:(id)arg1;
- (void)setIgnoreExistingQuestions:(bool)arg1;
- (void)setManager:(id)arg1;
- (bool)shouldAddQuestion:(id)arg1 toAlreadyGeneratedQuestions:(id)arg2;

@end
