//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMShareRelationshipRestrictions, NSArray;

@interface EDAMShareRelationships : FATObject
{
    NSArray *_invitations;
    NSArray *_memberships;
    EDAMShareRelationshipRestrictions *_invitationRestrictions;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) EDAMShareRelationshipRestrictions *invitationRestrictions; // @synthesize invitationRestrictions=_invitationRestrictions;
@property(retain, nonatomic) NSArray *memberships; // @synthesize memberships=_memberships;
@property(retain, nonatomic) NSArray *invitations; // @synthesize invitations=_invitations;

@end

