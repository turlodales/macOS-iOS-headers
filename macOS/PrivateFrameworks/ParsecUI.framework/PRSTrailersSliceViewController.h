//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

#import "PRSSliceViewControllerDelegate.h"

@class PRSTrailersCardSection;

@interface PRSTrailersSliceViewController : PRSCardSectionSliceViewController <PRSSliceViewControllerDelegate>
{
}

- (id)trailerImageViewHeightConstraint;
- (id)trailerTextFieldAtIndex:(unsigned long long)arg1;
- (id)trailerImageViewAtIndex:(unsigned long long)arg1;
- (id)titleTextField;
- (unsigned long long)maximumNumberOfTrailers;
- (id)trailersSliceView;
- (void)openTrailer:(id)arg1;
- (void)syncAttributes;
- (double)syncImageView:(id)arg1 textField:(id)arg2 index:(unsigned long long)arg3;
- (double)height;
- (BOOL)handleMouseUp:(id)arg1 alternatePunchout:(id)arg2;
- (void)_sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (BOOL)isAccessibilityElement;
- (void)viewDidLoad;
- (void)awakeFromNib;
@property(retain, nonatomic) PRSTrailersCardSection *trailersCardSection;
- (id)init;
- (id)initWithCardSection:(id)arg1 nibName:(id)arg2;
- (id)initWithTrailersCardSection:(id)arg1;

@end

