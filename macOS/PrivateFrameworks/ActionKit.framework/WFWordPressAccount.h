//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount
{
    NSURL *_endpointURL;
}

+ (id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3;
+ (unsigned long long)modelVersion;
+ (BOOL)allowsMultipleAccounts;
+ (id)localizedServiceName;
+ (id)serviceID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;
- (BOOL)isValid;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;

@end

