//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord;
@protocol WFCloudKitItem;

@interface WFCloudKitItemRecord : NSObject
{
    CKRecord *_record;
    id <WFCloudKitItem> _item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <WFCloudKitItem> item; // @synthesize item=_item;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (id)initWithRecord:(id)arg1 item:(id)arg2;

@end

