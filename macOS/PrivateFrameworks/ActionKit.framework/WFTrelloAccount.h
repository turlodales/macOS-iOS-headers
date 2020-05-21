//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount
{
    NSString *_token;
    NSString *_email;
}

+ (id)localizedServiceName;
+ (id)serviceID;
+ (id)accountWithToken:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;
- (BOOL)isValid;

@end

