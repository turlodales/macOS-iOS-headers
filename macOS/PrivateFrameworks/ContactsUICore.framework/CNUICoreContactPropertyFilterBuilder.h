//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNUICoreContactPropertyFilterBuilder : NSObject
{
    BOOL _excludeNickname;
    BOOL _excludePhoto;
    BOOL _excludeNote;
    BOOL _excludeRelationships;
}

+ (id)whitelistedContactsFilterBuilder;
+ (id)managedContactsFilterBuilder;
@property(nonatomic) BOOL excludeRelationships; // @synthesize excludeRelationships=_excludeRelationships;
@property(nonatomic) BOOL excludeNote; // @synthesize excludeNote=_excludeNote;
@property(nonatomic) BOOL excludePhoto; // @synthesize excludePhoto=_excludePhoto;
@property(nonatomic) BOOL excludeNickname; // @synthesize excludeNickname=_excludeNickname;
- (id)build;

@end

