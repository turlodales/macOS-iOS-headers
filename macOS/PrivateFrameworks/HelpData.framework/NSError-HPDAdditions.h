//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HPDAdditions)
+ (id)hpd_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)hpd_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)hpd_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 userInfo:(id)arg5;
- (id)hpd_verboseLocalizedDescription;
@end

