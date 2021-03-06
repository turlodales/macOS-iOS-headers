/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIPredictionView : UIView <UIGestureRecognizerDelegate> {
    TIAutocorrectionList * _autocorrectionList;
    UIKBVisualEffectView * _backdropView;
    TUIPredictionViewStackView * _cellStackView;
    NSLocale * _currentLocale;
    <TUIPredictionViewDelegate> * _delegate;
    bool  _drawsBackdropView;
    unsigned long long  _maximumEmojiCells;
    unsigned long long  _minimumNumberOfCells;
    UIKBRenderConfig * _renderConfig;
    long long  _selectedIndex;
    UILongPressGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) TIAutocorrectionList *autocorrectionList;
@property (nonatomic, retain) UIKBVisualEffectView *backdropView;
@property (nonatomic, retain) TUIPredictionViewStackView *cellStackView;
@property (nonatomic, retain) NSLocale *currentLocale;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUIPredictionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (nonatomic) bool drawsBackdropView;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumEmojiCells;
@property (nonatomic) unsigned long long minimumNumberOfCells;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILongPressGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (id)_candidatesToDisplayForAutocorrectionList:(id)arg1;
- (void)_didRecognizeTapGesture:(id)arg1;
- (bool)_ensureVisibleCellCount:(unsigned long long)arg1 forCellStackView:(id)arg2;
- (unsigned long long)_predictionCellIndexAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_reloadCellsAnimated:(bool)arg1;
- (void)_setRenderConfig:(id)arg1;
- (bool)_shouldPadWithEmptyCellsForAutocorrectionList:(id)arg1;
- (void)_updateHighlightedCellForTouch:(id)arg1;
- (void)_updateVisibleCellAppearance;
- (id)allVisibleCells;
- (id)autocorrectionList;
- (id)backdropView;
- (void)cancelTapGestureRecognizer;
- (id)cellStackView;
- (void)configurePredictionCell:(id)arg1 forCandidate:(id)arg2 animated:(bool)arg3;
- (id)currentLocale;
- (id)delegate;
- (id)displayedCandidates;
- (bool)drawsBackdropView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutDirection;
- (void)layoutSubviews;
- (double)maximumBackgroundWidth;
- (unsigned long long)maximumEmojiCells;
- (unsigned long long)minimumNumberOfCells;
- (id)renderConfig;
- (long long)selectedIndex;
- (void)setAutocorrectionList:(id)arg1;
- (void)setAutocorrectionList:(id)arg1 animated:(bool)arg2;
- (void)setBackdropView:(id)arg1;
- (void)setCellStackView:(id)arg1;
- (void)setCurrentLocale:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsBackdropView:(bool)arg1;
- (void)setMaximumEmojiCells:(unsigned long long)arg1;
- (void)setMinimumNumberOfCells:(unsigned long long)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (id)visibleCells;

@end
