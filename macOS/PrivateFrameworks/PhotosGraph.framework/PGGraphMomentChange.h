//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange
{
    NSString *_momentLocalIdentifier;
    PGGraphMomentNode *_momentNode;
    unsigned long long _updateTypes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long updateTypes; // @synthesize updateTypes=_updateTypes;
@property(retain, nonatomic) PGGraphMomentNode *momentNode; // @synthesize momentNode=_momentNode;
@property(readonly, nonatomic) NSString *momentLocalIdentifier; // @synthesize momentLocalIdentifier=_momentLocalIdentifier;
- (id)description;
- (unsigned long long)type;
- (void)mergeChange:(id)arg1;
- (id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2;

@end

