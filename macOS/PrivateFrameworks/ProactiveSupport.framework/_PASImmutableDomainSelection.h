//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProactiveSupport/_PASDomainSelection.h>

@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection
{
    NSSet *_domains;
}

- (void).cxx_destruct;
- (BOOL)isEqualToDomainSelection:(id)arg1;
- (BOOL)isEmpty;
- (id)allDomains;
- (BOOL)containsDomain:(id)arg1;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;

@end

