//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSource.h>

@class NUSourceDefinition;

@interface NUResolvedSource : NUSource
{
    NUSourceDefinition *_resolvedSourceDefinition;
}

- (void).cxx_destruct;
@property(retain) NUSourceDefinition *resolvedSourceDefinition; // @synthesize resolvedSourceDefinition=_resolvedSourceDefinition;
- (id)description;
- (id)sourceDefinition:(out id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

