//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVCreate : ISS_DAVRequest
{
}

+ (id)dmCreateRequestWithSession:(id)arg1 file:(id)arg2 props:(id)arg3 URI:(id)arg4;
+ (id)dmCreateRequestWithSession:(id)arg1 data:(id)arg2 props:(id)arg3 URI:(id)arg4;
- (void)finalizeOperation;
- (void)addPropHeaders:(id)arg1;
- (id)dmCreateWithSession:(id)arg1 data:(id)arg2 props:(id)arg3 URI:(id)arg4;

@end

