//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString, STAskForTimeRequestResponse, STUsageDetailItem;

@interface STRequestItem : NSObject
{
    STAskForTimeRequestResponse *_request;
    STUsageDetailItem *_item;
}

+ (id)keyPathsForValuesAffectingLocalizedDisplayName;
+ (id)keyPathsForValuesAffectingIconImage;
- (void).cxx_destruct;
@property(retain, nonatomic) STUsageDetailItem *item; // @synthesize item=_item;
@property(retain, nonatomic) STAskForTimeRequestResponse *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSString *descriptionString;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName;
@property(readonly, copy, nonatomic) NSImage *iconImage;
- (id)initWithAskForTimeRequest:(id)arg1;

@end

