/* SPDX-FileCopyrightText: 2001-2002 NaN Holding BV. All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup DNA
 * \brief These structs are the foundation for all linked lists in the library system.
 *
 * Doubly-linked lists start from a ListBase and contain elements beginning
 * with Link.
 */

#pragma once

/** Generic - all structs which are put into linked lists begin with this. */
typedef struct Link {
  struct Link *next, *prev;
} Link;

/** Simple subclass of Link. Use this when it is not worth defining a custom one. */
typedef struct LinkData {
  struct LinkData *next, *prev;
  void *data;
} LinkData;

/**
 * The basic double linked-list structure.
 *
 * \warning Never change the size/definition of this struct! The #init_structDNA
 * function (from dna_genfile.cc) uses it to compute the #pointer_size.
 */
typedef struct ListBase {
  void *first, *last;
} ListBase;

/* 8 byte alignment! */
