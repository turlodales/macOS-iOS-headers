//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem
{
    PKPaymentContentItem *_contentItem;
}

+ (BOOL)supportsMultipleItems;
+ (long long)dataType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKPaymentContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (BOOL)isValidWithError:(id *)arg1;
- (id)initWithContentItem:(id)arg1;

@end

