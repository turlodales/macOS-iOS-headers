//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNContainerPropertyDescription.h>

__attribute__((visibility("hidden")))
@interface CNContainerTypeDescription : CNContainerPropertyDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (id)CNValueForContainer:(id)arg1;
- (BOOL)isValidValue:(id)arg1 error:(id *)arg2;
- (Class)valueClass;
- (BOOL)isWritable;
- (id)key;
- (id)abcdContainerValueForCNValue:(id)arg1;
- (id)abcdContainerKey;

@end

