//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSendProgress, NSDictionary;

@protocol IMSendProgressDelegate <NSObject>
- (void)sendProgress:(IMSendProgress *)arg1 progressDidChange:(float)arg2 sendingMessages:(NSDictionary *)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6;
@end

