//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class ABCNContactIdentifier, NSMutableDictionary;

@interface ABCNInMemoryState : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_contactsByIdentifier;
    NSMutableDictionary *_groupsByIdentifier;
    ABCNContactIdentifier *_meCardIdentifier;
}

- (id)meCardIdentifier;
- (id)groupsPassingTest:(CDUnknownBlockType)arg1;
- (id)groupsMatchingPredicate:(id)arg1;
- (id)contactsPassingTest:(CDUnknownBlockType)arg1;
- (id)contactsWithLinkIdentifier:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1;
- (id)contactsWithIdentifiers:(id)arg1;
- (id)contactWithIdentifier:(id)arg1;
- (id)allContacts;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithState:(id)arg1;
- (id)init;

@end

