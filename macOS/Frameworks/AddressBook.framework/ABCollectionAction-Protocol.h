//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABCollectionViewItem;

@protocol ABCollectionAction <NSObject>
- (void)executeWithTarget:(ABCollectionViewItem *)arg1;
- (BOOL)validateWithTarget:(ABCollectionViewItem *)arg1;

@optional
- (void)executeWithSender:(id)arg1 target:(ABCollectionViewItem *)arg2;
@end

