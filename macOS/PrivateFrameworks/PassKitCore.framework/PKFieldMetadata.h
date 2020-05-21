//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding>
{
    BOOL _shouldIgnoreField;
    BOOL _foundExplicitlyRequestedPass;
    NSArray *_associatedPassIdentifiers;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL foundExplicitlyRequestedPass; // @synthesize foundExplicitlyRequestedPass=_foundExplicitlyRequestedPass;
@property(readonly, nonatomic) BOOL shouldIgnoreField; // @synthesize shouldIgnoreField=_shouldIgnoreField;
@property(readonly, copy, nonatomic) NSArray *associatedPassIdentifiers; // @synthesize associatedPassIdentifiers=_associatedPassIdentifiers;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssociatedPassIdentifiers:(id)arg1 shouldIgnoreField:(BOOL)arg2 foundExplicitlyRequestedPass:(BOOL)arg3;
- (id)init;

@end

