//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/_NSDiffableDataSourceUpdate-Protocol.h>

@class NSOrderedSet, NSString;

@interface _NSDiffableDataSourceUpdate : NSObject <_NSDiffableDataSourceUpdate>
{
    BOOL _isSectionOperation;
    BOOL _destinationIdentifierIsSectionIdentifier;
    NSOrderedSet *_identifiers;
    long long _action;
    long long _relativePosition;
    id _destinationIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL destinationIdentifierIsSectionIdentifier; // @synthesize destinationIdentifierIsSectionIdentifier=_destinationIdentifierIsSectionIdentifier;
@property(readonly, nonatomic) id destinationIdentifier; // @synthesize destinationIdentifier=_destinationIdentifier;
@property(readonly, nonatomic) long long relativePosition; // @synthesize relativePosition=_relativePosition;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
@property(readonly, nonatomic) NSOrderedSet *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) BOOL isSectionOperation; // @synthesize isSectionOperation=_isSectionOperation;
- (void)_throwIfInvalid;
@property(readonly, copy) NSString *description;
- (id)initWithSectionIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;
- (id)initWithItemIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2;
- (id)initWithIdentifiers:(id)arg1 sectionIdentifiers:(id)arg2 action:(long long)arg3 desinationIdentifier:(id)arg4 relativePosition:(long long)arg5 destinationIsSection:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

