//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVCopy : ISS_DAVRequest
{
}

+ (id)copyRequestWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 token:(id)arg4;
- (void)finalizeOperation;
- (id)initCopyWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 token:(id)arg4;

@end

