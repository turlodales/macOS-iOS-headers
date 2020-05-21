//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedControl.h"

__attribute__((visibility("hidden")))
@interface ReadingListSegmentedControl : NSSegmentedControl
{
    id <ReadingListSegmentedControlDelegate> _readingListSegmentedControlDelegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ReadingListSegmentedControlDelegate> readingListSegmentedControlDelegate; // @synthesize readingListSegmentedControlDelegate=_readingListSegmentedControlDelegate;
- (void)selectUnreadSegment;
- (void)selectAllSegment;
@property(readonly, nonatomic) BOOL selectedSegmentIsUnreadSegment;
@property(readonly, nonatomic) BOOL selectedSegmentIsAllSegment;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

