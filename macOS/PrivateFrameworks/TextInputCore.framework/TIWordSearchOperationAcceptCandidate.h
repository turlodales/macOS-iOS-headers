//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation
{
    void *_mecabraCandidate;
    BOOL _partialCandidate;
    TIMecabraWrapper *_mecabraWrapper;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPartialCandidate) BOOL partialCandidate; // @synthesize partialCandidate=_partialCandidate;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)perform;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void *)arg2 isPartial:(BOOL)arg3;

@end

