//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString;

@protocol DNSResolverObserver
- (void)dnsResolverError:(NSObject *)arg1;
- (void)dnsResolverResolvedAddress:(NSString *)arg1 userInfo:(NSObject *)arg2;
- (void)dnsResolverResolvedHostname:(struct in6_addr)arg1 userInfo:(NSObject *)arg2;

@optional
- (void)dnsResolverResolvedHost:(struct __CFHost *)arg1 toAddr:(struct in6_addr)arg2 userInfo:(NSObject *)arg3;
@end

