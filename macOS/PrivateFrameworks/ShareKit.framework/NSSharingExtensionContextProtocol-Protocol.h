//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareKit/NSObject-Protocol.h>

@class NSData;

@protocol NSSharingExtensionContextProtocol <NSObject>
- (void)startSessionTeardownByCallingContinuationBlock:(void (^)(void))arg1;
- (void)closeServiceWindowWithSuccess:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)cancelServiceUI;
- (void)performServiceWithOptionsDictionaryData:(NSData *)arg1 completion:(void (^)(void))arg2;
@end

