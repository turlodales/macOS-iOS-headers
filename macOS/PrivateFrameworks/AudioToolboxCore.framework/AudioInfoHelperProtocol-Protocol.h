//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary;

@protocol AudioInfoHelperProtocol
- (void)validateComponent:(NSDictionary *)arg1 parameters:(NSDictionary *)arg2 reply:(void (^)(unsigned int))arg3;
- (void)getConfigurationInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)clearInfoHelperCache;
@end

