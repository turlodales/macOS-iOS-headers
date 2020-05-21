//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3Client, ML3MediaLibraryWriter, ML3MusicLibrary;

@interface ML3ServiceDatabaseImport : ML3DatabaseImport
{
    ML3MusicLibrary *_library;
    ML3MediaLibraryWriter *_writer;
    ML3Client *_client;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ML3Client *client; // @synthesize client=_client;
@property(readonly, nonatomic) ML3MediaLibraryWriter *writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4;

@end

