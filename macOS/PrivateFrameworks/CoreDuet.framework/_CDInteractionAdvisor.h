//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDInteractionAdvising.h"

@class NSError, NSXPCConnection;

@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising>
{
    NSXPCConnection *_connection;
    NSError *_error;
}

+ (id)interactionAdvisor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsUsingSettings:(id)arg1;
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;

@end

