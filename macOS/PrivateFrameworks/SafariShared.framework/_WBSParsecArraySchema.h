//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecSchema.h>

@interface _WBSParsecArraySchema : WBSParsecSchema
{
    WBSParsecSchema *_elementSchema;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WBSParsecSchema *elementSchema; // @synthesize elementSchema=_elementSchema;
- (BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)initWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;

@end

