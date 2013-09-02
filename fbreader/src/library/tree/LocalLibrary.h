/*
 * Copyright (C) 2004-2013 Geometer Plus <contact@geometerplus.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef LOCALLIBRARY_H
#define LOCALLIBRARY_H

#include "LibraryTreeNodes.h"
#include "LibraryNodes.h"

class RecentBooksNode;
class FavoritesBooksNode;
class AuthorsCatalogNode;
class TagsCatalogNode;
class BooksByTitleNode;

class LocalLibrary {

public:
    static LocalLibrary &Instance();
    void showDialog();
    void hideDialog();
    void synchronize();
    void refresh();

private:
    static LocalLibrary *ourInstance;
    LocalLibrary();
    void makeUpToDate();

private:
    shared_ptr<ZLTreeDialog> myDialog;
    RootTree myRootTree;
};

#endif // LOCALLIBRARY_H
