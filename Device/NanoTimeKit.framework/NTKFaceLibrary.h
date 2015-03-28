//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKFaceChangeObserver.h"
#import "PSYSyncStateObserverDelegate.h"

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NTKFace, NTKTaskScheduler, PSYSyncStateObserver;

@interface NTKFaceLibrary : NSObject <NTKFaceChangeObserver, PSYSyncStateObserverDelegate>
{
    PSYSyncStateObserver *_initialSyncObserver;
    NSMutableArray *_libraryFaces;
    NSMutableDictionary *_potentialFacesByStyle;
    NSMutableArray *_addableFaceStyles;
    NTKTaskScheduler *_taskScheduler;
    NSMutableSet *_dirtyPotentialFaceStyles;
    BOOL _selectionDirty;
    BOOL _libraryFacesDirty;
    BOOL _potentialFacesDirty;
    BOOL _aggdLoggingDirty;
    NTKFace *_pptBlankFace;
    NSHashTable *_changeObservers;
    BOOL _initialSyncDataReceived;
    unsigned int _selectedFaceIndex;
}

+ (void)F5DeleteLibraryPreferences;
- (void)PPTRestoreLibrary;
- (void)PPTUseBlankFaceLibrary;
- (int)PPTFaceIndexForPPTFaceName:(id)arg1;
- (void)removeChangeObserver:(id)arg1;
- (void)addChangeObserver:(id)arg1;
- (int)addableFaceStyleAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfAddableFaceStyles;
- (void)reloadAddableFaceStyles;
- (void)addLibraryFace:(id)arg1;
- (void)insertLibraryFace:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeLibraryFaceAtIndex:(unsigned int)arg1;
- (BOOL)containsFace:(id)arg1;
- (void)enumerateLibraryAndPotentialFacesUsingBlock:(CDUnknownBlockType)arg1;
- (void)syncStateObserverDidChangeSyncState:(id)arg1;
- (void)_clearAggdKeysForFaceStyle:(int)arg1;
- (int)PPTFaceIndexForFaceStyle:(int)arg1;
- (int)PPTFaceStyleForPPTFaceName:(id)arg1;
- (unsigned int)indexOfLibraryFace:(id)arg1;
- (void)_setAggdKeysForCurrentFace;
- (void)_clearAllAggdKeys;
- (void)_backupPreferencesKey:(struct __CFString *)arg1;
- (id)_libraryFacesOfStyle:(int)arg1;
- (void)_cleanAggdLogging;
- (void)_cleanPotentialFaces;
- (void)_cleanLibraryFaces;
- (void)_cleanSelection;
- (void)_cleanPotentialFaceStyle:(int)arg1;
- (void)_handleInitialDataChanged;
- (void)_dirtyPotentialFaces;
- (void)_notifyFaceChanged:(id)arg1;
- (void)_notifyFaceRemoved:(id)arg1;
- (void)_dirtyLibraryFaces;
- (void)_dirtyPotentialFaceStyle:(int)arg1;
- (void)_notifyFaceAdded:(id)arg1;
- (void)_setPotentialFace:(id)arg1;
- (id)_anyLibraryFaceOfStyle:(int)arg1;
- (id)potentialFaceForStyle:(int)arg1;
- (id)selectedLibraryFace;
- (void)_dirtyFaceSelection;
- (unsigned int)numberOfLibraryFaces;
- (void)_handleLibraryFaceAdded:(id)arg1;
- (void)_handleLibraryFaceRemoved:(id)arg1;
@property(nonatomic) unsigned int selectedFaceIndex; // @synthesize selectedFaceIndex=_selectedFaceIndex;
- (id)libraryFaceAtIndex:(unsigned int)arg1;
- (BOOL)_isPotentialFace:(id)arg1;
- (BOOL)_isLibraryFace:(id)arg1;
- (void)enumerateLibraryFacesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_dirtyAggdLogging;
- (void)_dirtyAllPotentialFaceStyles;
- (void)_loadPotentialFaces;
- (void)_loadLibraryFaces;
- (void)faceDidChange:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

