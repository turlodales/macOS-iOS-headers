//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PASampling/PACSRefWrapper.h>

@class NSString;

@interface PACSSymbolOwnerWrapper : PACSRefWrapper
{
    NSString *_path;
    BOOL _usedDsymForUUID;
}

- (void).cxx_destruct;
@property BOOL usedDsymForUUID; // @synthesize usedDsymForUUID=_usedDsymForUUID;
- (id)debugDescription;
@property(readonly) __weak NSString *path;
- (id)initWithSymbolOwner:(struct _CSTypeRef)arg1 andPath:(id)arg2;
- (id)initWithSymbolOwner:(struct _CSTypeRef)arg1;

@end

