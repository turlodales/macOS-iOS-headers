//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class CoreDAVTask, NSData, NSError, NSString;

@protocol CoreDAVResponseBodyParser <NSObject>
@property(readonly) NSError *parserError;
- (BOOL)processData:(NSData *)arg1 forTask:(CoreDAVTask *)arg2;

@optional
+ (BOOL)canHandleContentType:(NSString *)arg1;
@end

