//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface EWSAutodiscoverRequest : NSObject
{
    NSString *_emailAddress;
    NSString *_user;
    NSURL *_preferredAutodiscoverURL;
    NSString *_ewsInternalHostname;
    NSString *_ewsExternalHostname;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ewsExternalHostname; // @synthesize ewsExternalHostname=_ewsExternalHostname;
@property(readonly, copy, nonatomic) NSString *ewsInternalHostname; // @synthesize ewsInternalHostname=_ewsInternalHostname;
@property(readonly, nonatomic) NSURL *preferredAutodiscoverURL; // @synthesize preferredAutodiscoverURL=_preferredAutodiscoverURL;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (id)description;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 user:(id)arg2 preferredAutodiscoverURL:(id)arg3 ewsInternalHostname:(id)arg4 ewsExternalHostname:(id)arg5;

@end

