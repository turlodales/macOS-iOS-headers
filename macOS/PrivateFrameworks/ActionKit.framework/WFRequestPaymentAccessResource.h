//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAccessResource.h"

@interface WFRequestPaymentAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;

@end

