//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBiometricsSignatureRequest, NSString;

__attribute__((visibility("hidden")))
@interface AMSBiometricsSignatureResult : NSObject
{
    AMSBiometricsSignatureRequest *_originalRequest;
    NSString *_signature;
}

- (void).cxx_destruct;
@property(retain) NSString *signature; // @synthesize signature=_signature;
@property(retain) AMSBiometricsSignatureRequest *originalRequest; // @synthesize originalRequest=_originalRequest;

@end

