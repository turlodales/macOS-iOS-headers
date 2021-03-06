//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NWSnapshotSource : NSObject
{
    int _sockFd;
}

+ (id)routeSnapshotForIPv6Host:(struct sockaddr_in6 *)arg1 viaInterfaceIndex:(int)arg2;
+ (id)routeSnapshotForIPv4Host:(struct sockaddr_in *)arg1 viaInterfaceIndex:(int)arg2;
- (long long)recv:(void *)arg1 length:(unsigned long long)arg2 err:(int *)arg3;
- (long long)send:(void *)arg1 length:(unsigned long long)arg2 err:(int *)arg3;
- (void)dealloc;
- (id)init;

@end

