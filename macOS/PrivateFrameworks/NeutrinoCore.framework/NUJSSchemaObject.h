//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;

@interface NUJSSchemaObject : NUJSModelObject
{
}

+ (id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (BOOL)hasProperty:(id)arg1;
@property(readonly, nonatomic) id <NUIdentifiable> item;
@property(readonly, nonatomic) NUSchema *schema;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;

@end

