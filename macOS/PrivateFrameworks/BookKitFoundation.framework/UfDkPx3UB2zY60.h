//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookKitFoundation/AVContentKeySessionDelegate-Protocol.h>

@class NSString;

@interface UfDkPx3UB2zY60 : NSObject <AVContentKeySessionDelegate>
{
    int _audibleDRMGroupID;
}

@property(nonatomic) int audibleDRMGroupID; // @synthesize audibleDRMGroupID=_audibleDRMGroupID;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (id)initWithDRMGroupID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

