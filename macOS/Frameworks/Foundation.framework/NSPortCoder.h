//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface NSPortCoder : NSCoder
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)portCoderWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (void)dispatch;
- (id)decodePortObject;
- (void)encodePortObject:(id)arg1;
- (id)_connection;
- (id)connection;
- (BOOL)isByref;
- (BOOL)isBycopy;

@end

