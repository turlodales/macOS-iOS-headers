//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Social/SLRequest.h>

@interface SLInternalTencentWeiboRequest : SLRequest
{
    BOOL _shouldSign;
}

@property BOOL shouldSign; // @synthesize shouldSign=_shouldSign;
- (void)_addAuthenticationParameters:(id)arg1;
- (id)signedTencentRequestFromRequest:(id)arg1;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;

@end

